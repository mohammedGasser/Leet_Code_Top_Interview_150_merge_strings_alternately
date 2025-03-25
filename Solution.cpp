class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string mergeAlternatel;
       int i_1=word1.length();
       int i_2=word2.length();

       word1.append(0,'\0');
         word2.append(0,'\0');
      int m_=i_1+i_2;
   //   mergeAlternatel.append(word1);
        
 // mergeAlternatel+=word1[0];
          for(int i=0; i<i_1+i_2;i++ )
                { 
                    if(i<word1.size()) 
                     mergeAlternatel+=word1[i];
                 
                    if(i<word2.size())
              { mergeAlternatel+=word2[i];}
               
               
       }
        return mergeAlternatel; }
};
