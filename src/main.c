#include "freertos/idf_additions.h"
#include "freertos/projdefs.h"
#include <esp_log.h>
#include <freertos/FreeRTOS.h>

void app_main() {
  for (;;) {
    ESP_LOGI("TEST", "TEST");
    vTaskDelay(pdMS_TO_TICKS(1000));
  }
}
