#pragma once

#include <String>


class WebPage
{
private:
	std::string url;
	std::string content;
public:
	WebPage();
	WebPage(std::string url, std::string content);

	std::string getUrl();
	std::string getContent();
	void setUrl(std::string newUrl);
	void setContent(std::string newContent);
	

};

