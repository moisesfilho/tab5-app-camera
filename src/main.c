/**
 * @file main.c
 * @brief Aplicativo Câmera para Tab5 OS (delega a interface à Host View nativa).
 */

#include "tab5_sdk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void app_init(void)
{
    tab5_system_log(2, "tab5_camera", "Aplicativo Câmera iniciado");
}

static void app_resume(void)
{
    tab5_system_log(2, "tab5_camera", "Câmera retomada");
}

static void app_pause(void)
{
    tab5_system_log(2, "tab5_camera", "Câmera pausada");
}

static void app_destroy(void)
{
    tab5_system_log(2, "tab5_camera", "Câmera finalizada");
}

TAB5_APP_EXPORT int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    tab5_lifecycle_callbacks_t cbs = {
        .on_init = app_init,
        .on_resume = app_resume,
        .on_pause = app_pause,
        .on_destroy = app_destroy,
        .on_open_file = NULL,
    };

    tab5_lifecycle_register(&cbs);
    app_init();
    return 0;
}