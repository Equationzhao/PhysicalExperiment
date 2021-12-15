#include <cmath>
#include <iostream>

using namespace std;

int main() {
  constexpr double xi = 11.06 * 1e-3;
  constexpr double Ux = 0.11 * 1e-3;
  constexpr double L = 735.5 * 1e-3;
  constexpr double UL = 0.5 * 1e-3;
  constexpr double H = 698.1 * 1e-3;
  constexpr double UH = 0.5 * 1e-3;
  constexpr double l = 35.10 * 1e-3;
  constexpr double Ul = 0.02 * 1e-3;
  constexpr double d = 0.640 * 1e-3;
  constexpr double Ud = 0.005 * 1e-3;
  constexpr double m = 0.5;
  constexpr double Um = 0.005;
  constexpr double g = 9.8;
  constexpr double pi = 3.14159265358979323846;

  constexpr double E = 8 * m * g * L * H / (pow(d, 2) * l * pi * xi);

  constexpr double UE = sqrt(
      pow((8 * g * L * H / (pi * pow(d, 2) * l * xi)) * Um, 2) +
      pow((8 * m * g * H / (pi * pow(d, 2) * l * xi)) * UL, 2) +
      pow((8 * m * g * L / (pi * pow(d, 2) * l * xi)) * UH, 2) +
      pow((16 * m * g * L * H / (pi * pow(d, 3) * l * xi)) * Ud, 2) +
      pow((8 * m * g * L * H / (pi * pow(d, 2) * pow(l, 2) * xi)) * Ul, 2) +
      pow((8 * m * g * L * H / (pi * pow(d, 2) * l * pow(xi, 2))) * Ux, 2));
  cout << E << " " << UE << endl;
  return 0;
}