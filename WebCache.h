#pragma once
#include "WebPage.h"
#include <list>
#include <unordered_map>
#include<iostream>



class WebCache
{
private :
	int capacity;
	std::list<std::string> urls;
	std::unordered_map<std::string, WebPage> cache;

public:
	WebCache();
	WebCache(int capacity);

	void addWebPageToCache(WebPage newWebPage);
	std::string getContentOfWebPage(std::string url);
	bool isPageInCache(std::string url);
	void deleteWebPageOfCache(std::string url);
	int getSize();
};

