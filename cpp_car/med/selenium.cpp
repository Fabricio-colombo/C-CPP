#include <cppwebdriver/CPPWebDriver.h>

int main() {

    WebDriver driver;

    driver.Open("https://www.google.com");

    std::this_thread::sleep_for(std::chrono::seconds(5));

    driver.Close();

    return 0;
}
