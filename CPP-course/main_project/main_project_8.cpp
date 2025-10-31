#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
    // بررسی ورودی
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <image_path>" << endl;
        return -1;
    }

    // خواندن تصویر
    Mat image = imread(argv[1], IMREAD_COLOR);
    if (image.empty()) {
        cerr << "Error: Could not open or find the image!" << endl;
        return -1;
    }

    // تبدیل به خاکستری
    Mat gray_image;
    cvtColor(image, gray_image, COLOR_BGR2GRAY);

    // تشخیص لبه‌ها با Canny
    Mat edges;
    Canny(gray_image, edges, 100, 200);

    // ذخیره نتایج
    imwrite("gray_image.jpg", gray_image);
    imwrite("edges.jpg", edges);

    // نمایش تصاویر
    namedWindow("Original Image", WINDOW_AUTOSIZE);
    namedWindow("Gray Image", WINDOW_AUTOSIZE);
    namedWindow("Edges", WINDOW_AUTOSIZE);

    imshow("Original Image", image);
    imshow("Gray Image", gray_image);
    imshow("Edges", edges);

    waitKey(0);
    return 0;
}