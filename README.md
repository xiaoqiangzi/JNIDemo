基于Android studio 3.0 创建得JNI demo
1、在创建项目时勾选下边得 include C++ support一直点下一步，到最后一步时C++ standard 选项选择toolchain defualt选项，
Android studio 会自动帮你创建创建好相应得文件
2、在 .cpp源文件中，可以编写供native方法调用得方法，首先在Java文件中定义native方法，然后在cpp文件中定义相应得方法，cpp中定义得方法名规范为native方法所在的
包名_类名_方法名，然后就可以编写所需要的函数内容了
