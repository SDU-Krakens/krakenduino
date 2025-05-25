#include "freertos/idf_additions.h"
#include "freertos/projdefs.h"
#include <esp_log.h>
#include <freertos/FreeRTOS.h>

void app_main() {
  esp_log_level_set("main.c", ESP_LOG_DEBUG); // Set the log level for all components to verbose

  for (;;) {
    ESP_LOGV("main.c", "Hello verbose!");
    ESP_LOGD("main.c", "Hello debug!");
    ESP_LOGI("main.c", "Hello information!");
    ESP_LOGW("main.c", "Hello warning!");
    ESP_LOGE("main.c", "Hello error!");
    vTaskDelay(pdMS_TO_TICKS(1000));
  }
}
