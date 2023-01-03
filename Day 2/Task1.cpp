//To remove the vowels from a string


// Q link : https://practice.geeksforgeeks.org/problems/remove-vowels-from-string1446/1?fbclid=IwAR3hUbhztgoIn3Wz2XIeXdi7584r-eczI6OHYdgQbPooAT89IeDUxXYgeXE

//Approach: Storing the consonants in another array		
	string removeVowels(string S) 
	{
	 int i=0;
	 string s2;
	 while(S[i]!='\0')  
	 {
	    if(S[i]!='a'&&S[i]!='i'&&S[i]!='o'&&S[i]!='e'&&S[i]!='u')
	    {
	        s2+=S[i];
	        i++;
	    }
	    else
	    i++;}
	   
	 return s2;
	}
};
