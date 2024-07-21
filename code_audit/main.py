# -*- coding: utf-8 -*-

from form import *
import sys
def main():
    app = QApplication(sys.argv)
    startup_win = StartupWindow()
    startup_win.show()
    sys.exit(app.exec())

if __name__ == '__main__':
    main()
