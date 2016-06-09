/* 
 * File:   SME_scancodes.h
 * Author: Sam
 *
 * Created on 22 May 2016, 01:35
 */

#ifndef SME_SCANCODES_H
#define	SME_SCANCODES_H

namespace SME {
    namespace Keyboard {

        typedef enum {
            KEY_UNKNOWN,
            KEY_BACKSPACE = 8,
            KEY_TAB,
            KEY_RETURN = 13,
            KEY_ESCAPE = 27,
            KEY_SPACE = 32,
            KEY_HASH = 35,
            KEY_APOSTROPHE = 39,
            KEY_COMMA = 44,
            KEY_MINUS,
            KEY_PERIOD,
            KEY_SLASH,
            KEY_0,
            KEY_1,
            KEY_2,
            KEY_3,
            KEY_4,
            KEY_5,
            KEY_6,
            KEY_7,
            KEY_8,
            KEY_9,
            KEY_SEMICOLON = 59,
            KEY_EQUALS = 61,
            KEY_LSQBRACKET = 91,
            KEY_BACKSLASH,
            KEY_RSQBRACKET,
            KEY_GRAVE = 96,
            KEY_A,
            KEY_B,
            KEY_C,
            KEY_D,
            KEY_E,
            KEY_F,
            KEY_G,
            KEY_H,
            KEY_I,
            KEY_J,
            KEY_K,
            KEY_L,
            KEY_M,
            KEY_N,
            KEY_O,
            KEY_P,
            KEY_Q,
            KEY_R,
            KEY_S,
            KEY_T,
            KEY_U,
            KEY_V,
            KEY_W,
            KEY_X,
            KEY_Y,
            KEY_Z,
            KEY_DELETE = 127,
            KEY_INSERT,
            KEY_HOME,
            KEY_END,
            KEY_PAGEUP,
            KEY_PAGEDOWN,
            KEY_UP,
            KEY_DOWN,
            KEY_LEFT,
            KEY_RIGHT,
            KEY_F1,
            KEY_F2,
            KEY_F3,
            KEY_F4,
            KEY_F5,
            KEY_F6,
            KEY_F7,
            KEY_F8,
            KEY_F9,
            KEY_F10,
            KEY_F11,
            KEY_F12,
            KEY_F13,
            KEY_F14,
            KEY_F15,
            KEY_F16,
            KEY_F17,
            KEY_F18,
            KEY_F19,
            KEY_F20,
            KEY_F21,
            KEY_F22,
            KEY_F23,
            KEY_F24,
            KEY_CAPSLOCK,
            KEY_SCROLLLOCK,
            KEY_NUMLOCK,
            KEY_KP_DIVIDE,
            KEY_KP_MULTIPLY,
            KEY_KP_MINUS,
            KEY_KP_PLUS,
            KEY_KP_ENTER,
            KEY_KP_1,
            KEY_KP_2,
            KEY_KP_3,
            KEY_KP_4,
            KEY_KP_5,
            KEY_KP_6,
            KEY_KP_7,
            KEY_KP_8,
            KEY_KP_9,
            KEY_KP_0,
            KEY_KP_PERIOD,
            KEY_KP_EQUALS,
            KEY_KP_COMMA,
            KEY_PRINTSCREEN,
            KEY_PAUSE,
            KEY_LOS,
            KEY_ROS,
            KEY_LCTRL,
            KEY_RCTRL,
            KEY_LSHIFT,
            KEY_RSHIFT,
            KEY_LALT,
            KEY_RALT,
            KEY_MENU,
            KEY_CLEAR
        } Key;

        static const Key OSScancodeTable []{
#if defined _WIN32
            KEY_UNKNOWN,
            KEY_ESCAPE,
            KEY_0,
            KEY_1,
            KEY_2,
            KEY_3,
            KEY_4,
            KEY_5,
            KEY_6,
            KEY_7,
            KEY_8,
            KEY_9,
            KEY_MINUS,
            KEY_EQUALS,
            KEY_BACKSPACE,
            KEY_TAB,
            KEY_Q,
            KEY_W,
            KEY_E,
            KEY_R,
            KEY_T,
            KEY_Y,
            KEY_U,
            KEY_I,
            KEY_O,
            KEY_P,
            KEY_LSQBRACKET,
            KEY_RSQBRACKET,
            KEY_RETURN,
            KEY_LCTRL,
            KEY_A,
            KEY_S,
            KEY_D,
            KEY_F,
            KEY_G,
            KEY_H,
            KEY_J,
            KEY_K,
            KEY_L,
            KEY_SEMICOLON,
            KEY_APOSTROPHE,
            KEY_GRAVE,
            KEY_LSHIFT,
            KEY_BACKSLASH,
            KEY_Z,
            KEY_X,
            KEY_C,
            KEY_V,
            KEY_B,
            KEY_N,
            KEY_M,
            KEY_COMMA,
            KEY_PERIOD,
            KEY_SLASH,
            KEY_RSHIFT,
            KEY_PRINTSCREEN,
            KEY_LALT,
            KEY_SPACE,
            KEY_CAPSLOCK,
            KEY_F1,
            KEY_F2,
            KEY_F3,
            KEY_F4,
            KEY_F5,
            KEY_F6,
            KEY_F7,
            KEY_F8,
            KEY_F9,
            KEY_F10,
            KEY_NUMLOCK,
            KEY_SCROLLLOCK,
            KEY_HOME,
            KEY_UP,
            KEY_PAGEUP,
            KEY_KP_MINUS,
            KEY_LEFT,
            KEY_KP_5,
            KEY_RIGHT,
            KEY_KP_PLUS,
            KEY_END,
            KEY_DOWN,
            KEY_PAGEDOWN,
            KEY_INSERT,
            KEY_DELETE,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_BACKSLASH,
            KEY_F11,
            KEY_F12,
            KEY_PAUSE,
            KEY_UNKNOWN,
            KEY_LOS,
            KEY_ROS,
            KEY_MENU,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_F13,
            KEY_F14,
            KEY_F15,
            KEY_F16,
            KEY_F17,
            KEY_F18,
            KEY_F19
#elif defined __linux__

#endif
        };

        static const Key OSKeycodeTable []{
#if defined _WIN32
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_BACKSPACE,
            KEY_TAB,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_CLEAR,
            KEY_RETURN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_LSHIFT,
            KEY_LCTRL,
            KEY_LALT,
            KEY_PAUSE,
            KEY_CAPSLOCK,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_ESCAPE,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_SPACE,
            KEY_PAGEUP,
            KEY_PAGEDOWN,
            KEY_END,
            KEY_HOME,
            KEY_LEFT,
            KEY_UP,
            KEY_RIGHT,
            KEY_DOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_PRINTSCREEN,
            KEY_INSERT,
            KEY_DELETE,
            KEY_UNKNOWN,
            KEY_0,
            KEY_1,
            KEY_2,
            KEY_3,
            KEY_4,
            KEY_5,
            KEY_6,
            KEY_7,
            KEY_8,
            KEY_9,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_A,
            KEY_B,
            KEY_C,
            KEY_D,
            KEY_E,
            KEY_F,
            KEY_G,
            KEY_H,
            KEY_I,
            KEY_J,
            KEY_K,
            KEY_L,
            KEY_M,
            KEY_N,
            KEY_O,
            KEY_P,
            KEY_Q,
            KEY_R,
            KEY_S,
            KEY_T,
            KEY_U,
            KEY_V,
            KEY_W,
            KEY_X,
            KEY_Y,
            KEY_Z,
            KEY_LOS,
            KEY_ROS,
            KEY_MENU,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_KP_0,
            KEY_KP_1,
            KEY_KP_2,
            KEY_KP_3,
            KEY_KP_4,
            KEY_KP_5,
            KEY_KP_6,
            KEY_KP_7,
            KEY_KP_8,
            KEY_KP_9,
            KEY_KP_MULTIPLY,
            KEY_KP_PLUS,
            KEY_UNKNOWN,
            KEY_KP_MINUS,
            KEY_KP_PERIOD,
            KEY_KP_DIVIDE,
            KEY_F1,
            KEY_F2,
            KEY_F3,
            KEY_F4,
            KEY_F5,
            KEY_F6,
            KEY_F7,
            KEY_F8,
            KEY_F9,
            KEY_F10,
            KEY_F11,
            KEY_F12,
            KEY_F13,
            KEY_F14,
            KEY_F15,
            KEY_F16,
            KEY_F17,
            KEY_F18,
            KEY_F19,
            KEY_F20,
            KEY_F21,
            KEY_F22,
            KEY_F23,
            KEY_F24,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_NUMLOCK,
            KEY_SCROLLLOCK,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_LSHIFT,
            KEY_RSHIFT,
            KEY_LCTRL,
            KEY_RCTRL,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_SEMICOLON,
            KEY_EQUALS,
            KEY_COMMA,
            KEY_MINUS,
            KEY_PERIOD,
            KEY_SLASH,
            KEY_APOSTROPHE,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_UNKNOWN,
            KEY_LSQBRACKET,
            KEY_BACKSLASH,
            KEY_RSQBRACKET,
            KEY_HASH,
            KEY_GRAVE

#elif defined __linux__

#endif
        };
    }
}

#endif	/* SME_SCANCODES_H */
