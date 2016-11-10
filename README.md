# xlog
sample fast c++ 11 log

```c++
int main()
{
	XLOG_OPEN("helo.log", xlog::log_level::WARN);

	for (int i = 0; i < 100000 ;i++)
	{
		const char *buf = "hello world";
		XLOG_INFO << "hello world" << "hello world" << 19191992 << true << false << buf;
	}
    getchar();
	return 0;
}
```
