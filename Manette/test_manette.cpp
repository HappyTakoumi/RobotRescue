
#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <linux/joystick.h>
#include <fstream>
#include<chrono>
#include<thread>

using namespace std;

int main()
{
    const char* device = "/dev/input/js0";
    int js = open(device, O_RDONLY);

  
    std::ofstream monFlux1("/dev/ttyACM1");
//    std::ofstream monFlux2("/dev/ttyACM0");

    if (js == -1)
    {
        cout << "Erreur: impossible d'ouvrir la manette Xbox." << endl;
        return 1;
    }

    cout << "Manette Xbox connectée." << endl;

    struct js_event event;

    while (true)
    {
        if (read(js, &event, sizeof(event)) != sizeof(event))
        {
            cout << "Erreur de lecture de la manette Xbox." << endl;
            break;
        }

        switch (event.type)
        { 
	  /*
            case JS_EVENT_BUTTON:
                if (event.value == 1)
                {
                    cout << "Bouton " << (int)event.number << " enfoncé." << endl;
                }
                else
                {
                    cout << "Bouton " << (int)event.number << " relâché." << endl;
                }
                break;
           */

            case JS_EVENT_AXIS:
                if (event.number == 0)
                {
                     cout << "Joystick X : " << event.value << endl;
                     monFlux1<<"x"<< event.value  << " \r " <<  endl;
//		     monFlux2<<"x"<< event.value  << " \r " <<  endl;
		     this_thread::sleep_for(chrono::milliseconds(50));
		}
                else if (event.number == 1)
                {
                    cout << "Joystick Y : " << event.value << endl;
		    monFlux1<<"y"<< event.value<< "\r"  << endl;
//		    monFlux2<<"y"<< event.value<< "\r " << endl;
		    this_thread::sleep_for(chrono::milliseconds(50));
                }
                break;
	}
    }
close(js);
}
