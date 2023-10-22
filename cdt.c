#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Hàm để đọc dữ liệu từ cảm biến nhiệt độ và độ ẩm
void read_sensor_data(float *temperature, float *humidity) {
    // Giả định đọc dữ liệu từ cảm biến
    *temperature = 25.0;
    *humidity = 50.0;
}

int main() {
    float temperature, humidity;

    // Vòng lặp chính để định kỳ lấy dữ liệu từ cảm biến
    while (1) {
        // Đọc dữ liệu từ cảm biến
        read_sensor_data(&temperature, &humidity);

        // In dữ liệu ra console
        printf("Temperature: %.2f°C\n", temperature);
        printf("Humidity: %.2f%%\n", humidity);

        // Chờ 1 giây trước khi lấy dữ liệu tiếp theo
        sleep(1);
    }

    return 0;
}
