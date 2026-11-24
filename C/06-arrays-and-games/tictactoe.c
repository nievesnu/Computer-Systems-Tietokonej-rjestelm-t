#include <stdio.h>
#include <stdint.h>

int8_t tictactoe_check(int8_t * gameboard, int win_len);

int8_t tictactoe_check(int8_t * gameboard, int win_len){
  int8_t x = 0, o= 0, xwin = 0, owin = 0;

  for(int i = 0; i< 100; i++){
    //check rows
    if(i%10 == 0){ //nueva fila, se empieza a contar de cero
      x = 0;
      o = 0;
    }
    if(gameboard[i] != 0){
		if(gameboard[i] == 1){
			x++;
			o = 0;
		}else{
			o++;
			x = 0;
		}
    }else{
		x = 0;
		o = 0;
	}
    if(x == win_len){
      xwin = 1;
    } else if (o == win_len) {
      owin = 1;
    }
  }
  for(int i = 0; i < 10; i++){
    //check colums
    x = 0;
    o = 0;

    for(int j = i; j < 100; j = j +10){
		if(gameboard[j] != 0){
			if(gameboard[j] == 1){
			  x++;
			  o = 0;
			}else{
			  o++;
			  x = 0;
			}
		}else{
			x = 0;
			o = 0;
		}
		if(x == win_len){
			xwin = 1;
		} else if (o == win_len) {
			owin = 1;
		}
    }
  }
  for(int i = 0; i < 19; i++){ //19 = 10 columnas + 9 filas sin comprobar.
    //check diags
	int j = 0;
	x = 0;
	o = 0;

    if(i < 10){
		j = i;
    }else j = 10 * (i - 9);

    for(; j < 100; j = j +11){
		if(gameboard[j] != 0){
			if(gameboard[j] == 1){
			  x++;
			  o = 0;
			}else{
			  o++;
			  x = 0;
			}
		}else{
			x = 0;
			o = 0;
		}
		if(x == win_len){
			xwin = 1;
        } else if (o == win_len) {
			owin = 1;
        }
		//this way it only cheks until the end of the row.
		if((j + 11) % 10 == 0) j = 100;
    }
  }
  for(int i = 0; i < 19; i++){ //lo mismo pero la otra diagonal (hacia la izquierda)
    //check diags 2
	int j = 0;
	x = 0;
	o = 0;

    if(i < 10){
		j = i;
    }else j = 10 * (i - 9) + 9;

    for(; j < 100; j = j +9){
		if(gameboard[j] != 0){
			if(gameboard[j] == 1){
			  x++;
			  o = 0;
			}else{
			  o++;
			  x = 0;
			}
		}else{
			x = 0;
			o = 0;
		}
		if(x == win_len){
			xwin = 1;
        } else if (o == win_len) {
			owin = 1;
        }
		//para en la primera columna
		if(j % 10 == 0) j = 100;
    }
  }
  if(xwin && !owin) return 1;
  if(owin && !xwin) return 2;
  return 0; //nadie gana o ganan los dos
}
