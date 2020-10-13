class Book
{
	public:
	Book(int pages, int first_page=1, int current_page=1, bool first_page_is_on_right=true) :
		number_of_pages(pages),
	 	first_page_number(first_page),
	 	current_page(current_page),
	 	first_page_is_on_right(first_page_is_on_right) {};
	void turn_pages(int count, bool backwards=false);
	void turn_page(bool backwards=false);
	bool is_page_visible(int page_no);
	void goto_first_page();
	void goto_last_page();
	bool goto_page(int page_no);
	int get_last_page_number();
	int get_current_page_number();
	bool get_right_hand_page_number();

	private:
	int number_of_pages;
	int first_page_number;
	int current_page;
	bool first_page_is_on_right;
	bool is_current_page_on_right();
	void notify_page_turn();
};

