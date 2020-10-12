
#include <iostream> 
#include<allegro5/allegro5.h>
#include<allegro5/allegro_native_dialog.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
#include<Windows.h>
#include<cstdlib>

#include "global.h"

using namespace std;

int main()
{
	if (!al_init()) {
		al_show_native_message_box(NULL, "ERROR CRITICO", "ERROR AL INICIAR; PONGACE EN CONTACTO CON SOPORTE TECNICO", "No se pudo cargar corrctamente la libreria ALLEGRO", NULL, ALLEGRO_MESSAGEBOX_ERROR);
		return -1;
	}
	al_init_font_addon();
	al_init_ttf_addon();
	al_install_keyboard();


	ALLEGRO_DISPLAY* ventana = al_create_display(1280, 720);
	ALLEGRO_FONT* Fuente_inicio = al_load_font("MLTWNII_.ttf", 70, 0);
	int ancho = GetSystemMetrics(SM_CXSCREEN);
	int alto = GetSystemMetrics(SM_CYSCREEN);
	bool b = true;
	al_set_window_title(ventana, "Cyber code");
	al_set_window_position(ventana, ancho / 2 - 800 / 2, alto / 2 - 600 / 2);

	while (b) {
		al_draw_text(Fuente_inicio, al_map_rgb(255, 255, 255), 200, 200, NULL, "Cybercode 2099");

		al_flip_display();

		
		b = false;


	}


}