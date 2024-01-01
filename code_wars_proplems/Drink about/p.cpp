#include <string>
 /*
 يَسْأَلُونَكَ عَنِ الْخَمْرِ وَالْمَيْسِرِ ۖ قُلْ فِيهِمَا إِثْمٌ كَبِيرٌ وَمَنَافِعُ لِلنَّاسِ وَإِثْمُهُمَا أَكْبَرُ مِن نَّفْعِهِمَا ۗ  
وَيَسْأَلُونَكَ مَاذَا يُنفِقُونَ قُلِ الْعَفْوَ ۗ كَذَٰلِكَ يُبَيِّنُ اللَّهُ لَكُمُ الْآيَاتِ لَعَلَّكُمْ تَتَفَكَّرُونَ"
            219 سورة البقرة، الآية 
      They ask you about wine and gambling. Say, "In them is great sin and [yet, some]
      benefit for people. 
      But their sin is greater than their benefit."
      And they ask you what they should spend. Say, "The excess [beyond needs]." 
      Thus Allah makes clear to you the verses [of revelation] that you might give thought.
                                                        "Surah Al-Baqara Verse 219"
*/
std::string people_with_age_drdy":
         age < 18 ? "drink coke":
         age < 21 ? "drink beer": "drink whisky";
}
//  or
 peoplef_with_age_drink(int age) {
  if ( age < 14 )
    return "drink toddy";
  if ( age < 18)
    return "drink coke";
  if ( age < 21) 
    return "drink beer";
  return "drink whisky";
  
}