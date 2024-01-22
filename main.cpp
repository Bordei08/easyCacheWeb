#include "WebCache.h"

int main()
{
    WebPage page1 ("www.google.com", "content gooogle");
    WebPage page2("www.netflix.com", "netflix content");
    WebPage page3("www.github.com", "github content");

    WebCache cache(2);

    cache.addWebPageToCache(page1);
    std::cout << "Page1 in cache = " << (cache.isPageInCache(page1.getUrl()) ? "True" : "False") << '\n';
    cache.addWebPageToCache(page2);
    std::cout << "Page2 in cache = " << (cache.isPageInCache(page2.getUrl()) ? "True" : "False") << '\n';
    std::cout << "Cache size is : " << cache.getSize() << '\n';
    cache.addWebPageToCache(page1);
    std::cout << "Page1 in cache = " << (cache.isPageInCache(page1.getUrl()) ? "True" : "False") << '\n';
    std::cout << "Cache size is : " << cache.getSize() << '\n';

    std::cout << "Content of page 1 of cache is : " << cache.getContentOfWebPage(page1.getUrl()) << '\n';

    cache.deleteWebPageOfCache(page1.getUrl());
    std::cout << "Page1 is delete of cache" << '\n';
    std::cout << "Cache size is : " << cache.getSize() << '\n';
    std::cout << "Page1 in cache = " << (cache.isPageInCache(page1.getUrl()) ? "True" : "False") << '\n';

    // auto delete when capacity is full, testing
    cache.addWebPageToCache(page1);
    std::cout << "Page1 in cache = " << (cache.isPageInCache(page1.getUrl()) ? "True" : "False") << '\n';
    cache.addWebPageToCache(page3);
    std::cout << "Page1 in cache = " << (cache.isPageInCache(page3.getUrl()) ? "True" : "False") << '\n';
    std::cout << "Cache size is : " << cache.getSize() << '\n';
    cache.addWebPageToCache(page1);
    std::cout << "Page1 in cache = " << (cache.isPageInCache(page2.getUrl()) ? "True" : "False") << '\n';
    // add page 1 and page 3 so page 2 is delete because capacity is 2

    return 0;

}