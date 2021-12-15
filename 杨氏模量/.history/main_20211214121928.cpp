#include <cmath>
#include <iostream>

using namespace std;

int main() {
  constexp double xi = 11.06 * 1e-3;
  constexp double Ux = 0.11 * 1e-3;
  constexp double L = 735.5 * 1e-3;
  constexp double UL = 0.5 * 1e-3;
  constexp double H = 698.1 * 1e-3;
  constexp double UH = 0.5 * 1e-3;
  constexp double l = 35.10 * 1e-3;
  constexp double Ul = 0.02 * 1e-3;
  constexp double d = 0.640 * 1e-3;
  constexp double Ud = 0.005 * 1e-3;
  constexp double m = 0.5;
  constexp double Um = 0.005;
  constexp double g = 9.8;
  constexp double pi = 3.14159265358979323846;
  constexp double E = 8 * m * g * L * H / (pow(d, 2) * l * pi * xi);
  constexp double UE = sqrt(
      pow((8 * g * L * H / (pi * pow(d, 2) * l * xi)) * Um, 2) +
      pow((8 * m * g * H / (pi * pow(d, 2) * l * xi)) * UL, 2) +
      pow((8 * m * g * L / (pi * pow(d, 2) * l * xi)) * UH, 2) +
      pow((16 * m * g * L * H / (pi * pow(d, 3) * l * xi)) * Ud, 2) +
      pow((8 * m * g * L * H / (pi * pow(d, 2) * pow(l, 2) * xi)) * Ul, 2) +
      pow((8 * m * g * L * H / (pi * pow(d, 2) * l * pow(xi, 2))) * Ux, 2));
  cout << E << " " << UE << endl;
  return 0;
}