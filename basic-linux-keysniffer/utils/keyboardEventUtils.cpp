//
// Created by gnir on 6/7/19.
//

#include "keyboardEventUtils.h"

namespace KeyboardEventUtils {

    std::string convertEventCodeToString(int eventCode) {
       switch (eventCode) {
           case KEY_1:
               return "1";
           case KEY_2:
               return "2";
           case KEY_3:
               return "3";
           case KEY_4:
               return "4";
           case KEY_5:
               return "5";
           case KEY_6:
               return "6";
           case KEY_7:
               return "7";
           case KEY_8:
               return "8";
           case KEY_9:
               return "9";
           case KEY_0:
               return "0";
           case KEY_Q:
               return "q";
           case KEY_W:
               return "w";
           case KEY_E:
               return "e";
           case KEY_R:
               return "r";
           case KEY_T:
               return "t";
           case KEY_Y:
               return "y";
           case KEY_U:
               return "u";
           case KEY_I:
               return "i";
           case KEY_O:
               return "o";
           case KEY_P:
               return "p";
           default:
               return "nope";
       }
    }
}
