# tab5-app-camera

Aplicativo **Câmera** para o sistema operacional **Tab5 OS** (M5Stack Tab5 / ESP32-P4), desacoplado e compilado para execução isolada em WebAssembly (WAMR).

## Características

- Preview ao vivo da câmera com rotação automática por orientação da tela
- Disparo de foto com gravação assíncrona no cartão microSD (`/sdcard/imagens`)
- Flash de captura e toast de confirmação
- Atalho direto para a Galeria
- Interface delegada à **Host View nativa** (`ui_camera_view`) do sistema operacional

## Como Compilar e Gerar o Pacote

```bash
# Executa o script de empacotamento
./tools/build.sh
```

O pacote resultante `com.tab5.camera.tab5pkg` será criado na pasta `dist/` e pode ser instalado diretamente no dispositivo via Cartão SD (`/sdcard/apps/`) ou embutido na partição de sistema do Tab5 OS.

## Licença

MIT License.
