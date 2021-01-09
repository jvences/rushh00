void rush (int x, int y){
	
	char error[20] = "Numero 0 eh invalido";

	if ((x == 0) || (y == 0)){
		write(1, error, 21);
	}

	int a = 1;
	int b = 1;
	char bola[1] = "o";
	char traco[1] = "-";
	char coluna[1] = "|";
	char white_space[1] = " ";
	char quebralinha[1] = "\n";

	while((a <= x) && (b <= y)){
		
		if((a == 1) || (a == x)) {
			write(1, bola, 1);
		}		
		if((a > 1) && (a <  x)){
			write(1, traco, 1);	
		}
		a++;	
	}
	if (y > 1){
		b++;
		while ((b > 1) && (b < y)){

			if ((b > 1) || (b < y)){
				write(1, quebralinha, 1);
		
				a = 1;

				while ((a <= x) && (b <= y)){
			
					if ((a == 1) || (a == x)){
						write(1, coluna, 1);
					} 

					if ((a > 1) && (a < x)){
						write(1, white_space,1);
					}

				a++;
		
				}
			}
		
			b++;

		}
		write(1, quebralinha, 1);
		a = 1;
		while(a <= x){
			
			if((a == 1) || (a == x)) {
				write(1, bola, 1);
			}

			if((a > 1) && (a < x)) {
				write(1, traco, 1);
			}
			a++;
		}

	}
	write(1, quebralinha, 1);
}

