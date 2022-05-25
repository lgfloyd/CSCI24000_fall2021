admin.class: admin.java user.class
	javac -g admin.java

user.class: user.java
	javac -g user.java

clean:
	rm *.class

run: admin.class
	java admin

debugAdmin: admin.class
	jdb admin

debugUser: user.class  
	jdb user
