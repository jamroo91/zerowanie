void zerowanie(int* x) {
     *x = 0;
	  } 
	   int main() {    
	    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};     
		zerowanie(&tab[0]);     
		zerowanie(&tab[3]);     
		zerowanie(&tab[4]);     
		zerowanie(&tab[7]);    
		 return 0; }