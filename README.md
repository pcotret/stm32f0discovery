# stm32f0discovery
Tools, links and references for the STM32F0discovery kit: https://www.st.com/content/st_com/en/products/evaluation-tools/product-evaluation-tools/mcu-eval-tools/stm32-mcu-eval-tools/stm32-mcu-discovery-kits/stm32f0discovery.html

## IDEs
- [System Workbench for STM32](https://www.st.com/en/development-tools/sw4stm32.html)
  - Just a collection of plugins for Eclipse, the easiet solution imho :)
- [Atollic TrueSTUDIO](https://atollic.com/truestudio/)
- [ARM Keil MD5](http://www2.keil.com/mdk5/)

## ToDo list
:white_check_mark: Playing with an "Hello world" example for LEDs

:black_square_button: Examples for other components (UART, timer...)

:black_square_button: Pushing a library of tool functions (see the sample project with utilities)

:black_square_button: Pushing a directory with some datasheets and links

:black_square_button: Writing a small tutorial in this README to get the environment ready

## Misc
- Rust API for the STM32F0: https://github.com/pollen-robotics/stm32f0
- A Rust embedded-hal HAL for all MCUs in the STM32 F0 family : https://github.com/stm32-rs/stm32f0xx-hal
  - The stm32f051r8 is missing (device in the STM32F0 Discovery kit). Should help with it
- Sample projects: https://github.com/jgowans/stm32f0_devel
- A template for builting STM23F0 ARM projects with GCC : https://github.com/szczys/stm32f0-discovery-basic-template
