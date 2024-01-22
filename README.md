# WebCache System

## Overview
The `WebCache` system is designed to simulate a simple caching mechanism for a web browser. It stores recently accessed web pages, identified by their URLs, and caches their content for quick retrieval.

## Features
- **Add Page to Cache**: Stores the content of a new page along with its URL.
- **Retrieve Page Content**: Fetches the content of a page using its URL.
- **Page Existence Check**: Verifies if a page is present in the cache.
- **Remove Page from Cache**: Deletes a page from the cache using its URL.
- **Automatic Cache Eviction**: Uses the Least Recently Used (LRU) policy to automatically evict the oldest page when the cache reaches its capacity limit.



