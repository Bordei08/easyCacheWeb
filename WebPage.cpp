#include "WebPage.h"

WebPage::WebPage()
{
}

WebPage::WebPage(std::string url, std::string content)
{
	this->url = url;
	this->content = content;
}

std::string WebPage::getUrl()
{
	return this->url;
}

std::string WebPage::getContent()
{
	return this->content;
}

void WebPage::setUrl(std::string newUrl)
{
	this->url = newUrl;
}

void WebPage::setContent(std::string newContent) 
{
	this->content = newContent;
}
