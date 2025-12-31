# Express Eats

Express Eats is a C++ food ordering and receipt generation program developed by Hallares & Carbo Food, Inc.  
It provides an interactive menu system where customers can select meals, drinks, and quantities, automatically calculates totals with VAT and change, and generates a formatted receipt (`receipt.txt`) containing all order details.

---

## Features
- Interactive menu with multiple categories (burgers, chickenjoy, rice meals, spaghetti, buckets, family meals).
- Dynamic order handling with drink selection and quantity input.
- Automatic calculation of:
  - Item totals
  - VAT
  - Change
- Receipt generation:
  - Creates `receipt.txt` with complete order details
  - Includes items, unit price, quantity, total amount, VAT, and change
- ASCII art banners for a polished terminal and receipt display.

---

## Requirements
- C++ compiler (e.g., g++, MSVC)
- Windows environment (uses `windows.h` and `Sleep`)
- Standard libraries: `<iostream>`, `<fstream>`, `<string>`, `<ctime>`, `<iomanip>`

---

## How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/express-eats.git
