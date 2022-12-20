#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv) {
  std::cout << "Testing" << std::endl;

  // string myString;

  // cin >> myString;
  // cout << myString;

  if (argc != 2) {
    std::cout << "Requires 1 parameter" << std::endl;
    return -1;
  }

  Mat image = imread(argv[1], 1);

  if (image.empty()) {
    std::cout << "No image data" << std::endl;
    return -1;
  }

  // namedWindow("Display Image", WINDOW_AUTOSIZE);
  imshow("Display Image", image);
  waitKey(0);

  return 0;
}