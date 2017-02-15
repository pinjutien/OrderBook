#include <iostream>
using namespace std;

// ref: http://www.rgmadvisors.com/problems/orderbook/

struct input_order {
  string time_stamp;
  string action;
  string order_id;
  string action_side;
  float price;
  int order_size;

  input_order(string time_stamp_,
	      string action_,
	      string order_id_,
	      string action_side_,
	      float price_,
	      int order_size_ ): time_stamp(time_stamp_),
				 action(action_),
				 order_id(order_id_),
				 action_side(action_side_),
				 price(price_),
				 order_size(order_size_) {}
};

void pricers_order_book(input_order incoming_order) {





}
  



