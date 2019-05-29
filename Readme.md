readme, using for explaining code.

-> for.cpp 
	memiliki dua variabel yaitu N dan hasil. hasil memiliki nilai 
	= 1, sedangkan n tidak. ketika user memasukan nilai ke n
		> scanf("%d",&N);
	maka langkah selanjutnya adalah melaksanakan perintah selanj-
	utnya. 
		> for (int i =1; i <= N; i++)
	jika bernilai true terhadap i, maka perintah pada for akan te-
	rus dijalankan. jika i belum mencapai N, maka perintah berlan-
	jut. Bi merupakan variabel local, karna hanya berlaku di 
		> for(){}
	kemudian, operasi berlanjut dengan user memasukan input bilan-
	gan bulat sebanyak N kali. kemudian, terdapat variable Bi ber-
	upa integer tanpa memiliki nilai. kemudian user memasukan nil-
	pada 
		> scanf("%d",&Bi);
	user memasukan input sebanyak N kali, yang kemudian dilanjut 
	dengan menambahkan nilai hasil dengan dirinya ditamnbah Bi.
		> hasil += bi;
	hingga program berakhir, dan i dinyatakan false, perintah for
	berhenti. kemudian dilanjutkan dengan perintah selanjutnya.ya-
	itu,
		> printf("%d\n", hasil);
