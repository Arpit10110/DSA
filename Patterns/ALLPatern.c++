// Q1.url=https://www.naukri.com/code360/problems/n-forest_6570177
void nForest(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++ ){
			cout<<"* ";
			}
		cout<<endl;
	}
}

// Q2.url=https://www.naukri.com/code360/problems/n-2-forest_6570178?leftPanelTabValue=SUBMISSION
void nForest(int n) {
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				cout<<"* ";
			}
			cout<<endl;
		}
}
// Q3.url=https://www.naukri.com/code360/problems/n-triangles_6573689?leftPanelTabValue=SUBMISSION
void nTriangle(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}	
}
// Q4.url=https://www.naukri.com/code360/problems/triangle_6573690?leftPanelTabValue=SUBMISSION
void triangle(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
// Q5.url=https://www.naukri.com/code360/problems/seeding_6581892?leftPanelTabValue=SUBMISSION
void seeding(int n) {
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
// Q6.url=https://www.naukri.com/code360/problems/reverse-number-triangle_6581889?leftPanelTabValue=SUBMISSION
void nNumberTriangle(int n) {
    for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
// Q7.url=https://www.naukri.com/code360/problems/star-triangle_6573671?leftPanelTabValue=SUBMISSION
void nStarTriangle(int n) {
   for(int i=1;i<=n;i++){
       for(int s=i;s<n;s++){
           cout<<" ";
       }
       for(int j=1;j<=(i*2)-1;j++){
           cout<<"*";
       }
       cout<<" "<<endl;
   }
}
// Q8.url=https://www.naukri.com/code360/problems/reverse-star-triangle_6573685?leftPanelTabValue=SUBMISSION
void nStarTriangle(int n) {
   for(int i=n;i>=1;i--){
       for(int s=i;s<n;s++){
           cout<<" ";
       }
       for(int j=1;j<=(i*2)-1;j++){
           cout<<"*";
       }
       cout<<" "<<endl;
   }
}
// Q9.url=https://www.naukri.com/code360/problems/star-diamond_6573686?leftPanelTabValue=SUBMISSION
void nStarDiamond(int n) {
   for(int i=1;i<=n;i++){
       for(int s=i;s<n;s++){
           cout<<" ";
       }
       for(int j=1;j<=(i*2)-1;j++){
           cout<<"*";
       }
       cout<<" \n";
   }
   for(int i=n;i>=1;i--){
       for(int s=i;s<n;s++){
           cout<<" ";
       }
       for(int j=1;j<=(i*2)-1;j++){
           cout<<"*";
       }
       cout<<" \n";
   }
}
// Q10.url=https://www.naukri.com/code360/problems/rotated-triangle_6573688?leftPanelTabValue=SUBMISSION
void nStarTriangle(int n) {
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<"*";
       }
       cout<<" \n";
   }
   n=n-1;
   for(int i=n;i>=1;i--){
       for(int j=1;j<=i;j++){
           cout<<"*";
       }
       cout<<" \n";
   }
}
// Q11.url=https://www.naukri.com/code360/problems/binary-number-triangle_6581890?leftPanelTabValue=SUBMISSION
void nBinaryTriangle(int n) {
    int f=1;
    int t;
    for(int i=1;i<=n;i++){
         t=f;
         cout<<f<<" ";
        for(int j=1;j<i;j++){
            if(t==0){
                cout<<"1 ";
                t=1;
            }else{
                cout<<"0 ";
                t=0;
            }
        }
        if(f==1){
            f=0;
        }else{
            f=1;
        }
        cout<<"\n";
    }
}

// Q12.url=https://www.naukri.com/code360/problems/number-crown_6581894?leftPanelTabValue=SUBMISSION
void numberCrown(int n) {
    int num;
    for(int i=1;i<=n;i++){
        num=1;
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        for(int s=i;s<n;s++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            num--;
            cout<<num<<" ";
        }
        cout<<endl;
    }
}
// Q13.url=https://www.naukri.com/code360/problems/increasing-number-triangle_6581893?leftPanelTabValue=SUBMISSION
void nNumberTriangle(int n) {
   int  num=1;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<num<<" ";
           num++;
       }
       cout<<endl;
   }
}
// Q14.url=https://www.naukri.com/code360/problems/increasing-letter-triangle_6581897?leftPanelTabValue=SUBMISSION
void nLetterTriangle(int n) {
    char num;
    for(int i=1;i<=n;i++){
            num ='A';
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
// Q15.url=https://www.naukri.com/code360/problems/reverse-letter-triangle_6581906?leftPanelTabValue=SUBMISSION
void nLetterTriangle(int n) {
   char num;
   for(int i=n;i>=1;i--){
       num='A';
       for(int j=1;j<=i;j++){
           cout<<num<<" ";
           num++;
       }
       cout<<endl;
   }
}
// Q16.url=https://www.naukri.com/code360/problems/alpha-ramp_6581888?leftPanelTabValue=SUBMISSION
void alphaRamp(int n) {
    char num='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
        }
        num++;
        cout<<endl;
    }
}

// Q17.url=https://www.naukri.com/code360/problems/alpha-hill_6581921?leftPanelTabValue=SUBMISSION
void alphaHill(int n) {
    char num;
   for(int i=1;i<=n;i++){
       for(int s=i;s<n;s++){
           cout<<" ";
       }
       num='A';
       for(int j=1;j<=i;j++){
           cout<<num<<" ";
           num++;
       }
           num--;
       for(int k=1;k<i;k++){
           num--;
           cout<<num<<" ";
       }
       cout<<endl;
   }
}
// Q18.url=https://www.naukri.com/code360/problems/alpha-triangle_6581429?leftPanelTabValue=SUBMISSION
void alphaTriangle(int n) {
    int val=(65+n)-1;
    char num;
    for(int i=1;i<=n;i++){
        num = char(val);
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
}
