#include "FibLFSR.h"

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Main
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(sixteenBitsThreeTaps) {

  FibLFSR l("1011011000110110");
  BOOST_REQUIRE(l.step() == 0);
  BOOST_REQUIRE(l.step() == 0);
  BOOST_REQUIRE(l.step() == 0);
  BOOST_REQUIRE(l.step() == 1);
  BOOST_REQUIRE(l.step() == 1);
  BOOST_REQUIRE(l.step() == 0);
  BOOST_REQUIRE(l.step() == 0);
  BOOST_REQUIRE(l.step() == 1);

  FibLFSR l2("1011011000110110");
  BOOST_REQUIRE(l2.generate(9) == 51);

  //cout << l << endl;
  //cout << l2 << endl;   
}

//Testing the step function 

BOOST_AUTO_TEST_CASE(sixteenBits_ThreeTaps) {
  
  FibLFSR l3("0101011100101101");
  BOOST_REQUIRE(l3.step() == 0);
  BOOST_REQUIRE(l3.step() == 1);
  BOOST_REQUIRE(l3.step() == 0);
  BOOST_REQUIRE(l3.step() == 1);
  BOOST_REQUIRE(l3.step() == 0);
  BOOST_REQUIRE(l3.step() == 1);
  
  //cout << l3 << endl;
}

//Testing the step function as well as the generate function 
BOOST_AUTO_TEST_CASE(ThreeTaps_Generate) {

  FibLFSR l4("0001110101110001"); 
  BOOST_REQUIRE(l4.step() == 0);
  BOOST_REQUIRE(l4.step() == 0);
  BOOST_REQUIRE(l4.step() == 1);
  BOOST_REQUIRE(l4.step() == 0);
  BOOST_REQUIRE(l4.step() == 1);
  BOOST_REQUIRE(l4.step() == 1); 
  
  FibLFSR l5("1010101010101010"); 
  BOOST_REQUIRE(l5.generate(4) == 0);
 
  //cout << l4 << endl; 

}
