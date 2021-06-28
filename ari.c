#include<cs50.h>

string ari(string s)
{
   int l=0, w=0, se=0, a_ari;
   float ari;
   string g_level[] = { "Kindergarten", "First/Second Grade", "Third Grade", "Fourth Grade", "Fifth Grade", "Sixth Grade", "Seventh Grade", "Eighth Grade", "Ninth Grade", "Tenth Grade", "Eleventh Grade", "Twelfth Grade", "College Student", "Professor" };
   for( int i=0; i<strlen(s); i++)
   {
      if( isalnum(s[i]) )
      {
         l++;
      }
      if( s[i]==' ' )
      {
         w++;
      }
      if( s[i] == '.' || s[i] == '!' || s[i] == '?' )
      {
         se++;
      }
   }
   ari = ((4.71*(l/w)) + (0.5*(w/se))) - 21.43;
   if(((int)ari)/ari > 0.001)
       a_ari = (int)ari + 1;
   else
       a_ari = (int)ari;
   
   return g_level[a_ari];

}
