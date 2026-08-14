#include "esp_err.h"
#include "esp_log.h"
#include "esp_lvgl_port.h"
#include "lvgl_port.h"
#include "spectrum_ui.h"

static const char *TAG = "main";

void app_main(void)
{
    ESP_ERROR_CHECK(lvgl_port_init_all());

    lvgl_port_lock(0);
    spectrum_ui_create();
    lvgl_port_unlock();

    ESP_LOGI(TAG, "spectrum visualizer running");
}
