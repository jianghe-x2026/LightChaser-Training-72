\# 第1章 开发环境与第一个工程



\## 1. 芯片型号

STM32F103C8T6



\## 2. 系统时钟

72 MHz（外部晶振 HSE 8MHz 经过 PLL 9倍频得到）



\## 3. 引脚表

| 引脚 | 功能 | 备注 |

|------|------|------|

| PC13 | GPIO\_Output | 板载 LED（低电平点亮） |

| PA4 | GPIO\_Output | led 1|

| PA5 | GPIO\_Output | led 2|

| PA6 | GPIO\_Output | led 3|

| PA13 | SWDIO | ST-Link 调试接口 |

| PA14 | SWCLK | ST-Link 调试接口 |

| PD0 | RCC\_OSC\_IN | 外部晶振输入 (8MHz) |

| PD1 | RCC\_OSC\_OUT | 外部晶振输出 |

| PA0 | SYS\_WKUP | 系统唤醒引脚（CubeMX默认配置） |

| PA15 | SYS\_JTDI | 默认调试引脚 |

| PB3 | SYS\_JTDO | 默认调试引脚 |

| PB4 | SYS\_NJTRST | 默认调试引脚 |

\## 4. 开发环境

\*   配置软件：STM32CubeMX

\*   编译软件：STM32CubeIDE 2.1.1

\*   下载器：ST-Link (SWD模式)



\## 5. 编译与烧录步骤

1\. 打开 STM32CubeIDE，选择 `File -> Open Projects from File System`，导入本文件夹。

2\. 将 ST-Link 的 SWDIO、SWCLK、GND、3.3V 与开发板对应连接。

3\. 点击顶部工具栏的“小锤子”图标编译工程，确保下方控制台显示 0 errors。

4\. 点击顶部工具栏的“绿色播放键”进行烧录。

5\. 烧录成功后，板载 A5,A6,A7连接的led会依次闪烁。



\## 6. 运行结果

代码烧录后，板载 LED 亮起。

