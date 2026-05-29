# 1.69" 240×280 TFT SPI module (ST7789V3) — documentation & samples

**简体中文：** [`README.md`](README.md)

---

> This repository provides an **ESP-IDF sample project**. Datasheets and specifications will be added to `docs/` when available.

## Product overview

| Item | Description |
|:--|:--|
| Module | 1.69-inch **TFT** (IPS), **240×280** resolution |
| Interface | **SPI** |
| Driver IC | **ST7789V3** |
| Spec ID | **`1.69-tft-240x280-spi-st7789v3`** is the common product designation in documentation |
| Related variant | **ST7789** (with touch and split test projects) is in **`1.69-tft-240x280-spi-st7789`** — different driver IC |

---

## Repository layout

### Top-level

| Path | Contents |
|:--|:--|
| `assets/` | Demo screenshots for sample projects (when available) |
| `docs/` | Datasheets and specifications (**to be added**) |
| `examples/` | **Sample projects** |

### `examples/` layout

| Location | Description |
|:--|:--|
| `examples/` root | ESP32-S3 + IDF5: ST7789V3 SPI + LVGL9 (spectrum UI demo) |

### Sample project paths

| Description | Path |
|:--|:--|
| ST7789V3 SPI bringup (LVGL9) | `examples/esp32s3-1.69-tft-240x280-spi-st7789v3-bringup/` |
