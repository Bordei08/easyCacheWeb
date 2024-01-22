#include "WebCache.h"

WebCache::WebCache()
{
}

WebCache::WebCache(int capacity)
{
	this->capacity = capacity;
}


void WebCache::addWebPageToCache(WebPage newWebPage)
{
	if (isPageInCache(newWebPage.getUrl())) {
		auto it = std::find(urls.begin(), urls.end(), newWebPage.getUrl());
		if (it != urls.end()) {
			urls.erase(it);
		}
		else {
			std::cout << "ERROR: The a url of web page not exist in urls list"<<'\n';
			std::cout << "ERROR: Url = " << newWebPage.getUrl() << '\n';
			return;
		}
	}
	else {
		if (capacity == cache.size()) {
			cache.erase(urls.back());
			urls.pop_back();
		}
	}

	urls.push_front(newWebPage.getUrl());
	cache[newWebPage.getUrl()] = newWebPage;
}

std::string WebCache::getContentOfWebPage(std::string url)
{

	if (!isPageInCache(url)) {
		std::cout << "ERROR: This page not exist in cache !!" << '\n';
		std::cout << "ERROR: Url = " << url << '\n';
		return nullptr;
	}
	return cache[url].getContent();
}


bool WebCache::isPageInCache(std::string url)
{
	auto it = cache.find(url);
	return it != cache.end();
}

void WebCache::deleteWebPageOfCache(std::string url)
{
	auto itCache = cache.find(url);
	if (itCache != cache.end()) {
		cache.erase(itCache);

		auto itList = std::find(urls.begin(), urls.end(), url);
		if (itList != urls.end()) {
			urls.erase(itList);
		}
		else {
			std::cout << "ERROR: The a url of web page not exist in urls list" << '\n';
			std::cout << "ERROR: Url = " << url << '\n';
			return;
		}

	}
	else {
		std::cout << "ERROR: The a url of web page not exist in cache" << '\n';
		std::cout << "ERROR: Url = " << url << '\n';
		return;
	}
}

int WebCache::getSize()
{
	return cache.size();
}
