# Minitalk Project

Minitalk is a simple and fast messaging application developed using the C programming language. This project consists of two main components: server and client.

## Installation and Compilation

Download or clone the project files:

```
git clone git@github.com:makbulut1/minitalk.git
```

While in the project directory, you can compile the server and client using the Makefile:


```
make all
```

## Starting the Server

To run the server, execute the server file and provide a process ID and a message argument:

### Like this
```
./server
```
### Or you can also do it like this
```
./server_bonus
```

## Starting the Client

To run the client, execute the client file and provide the server process ID and a message argument:

### Like this
```
./client [SUNUCU_PID] "Merhaba, minitalk!"
```
### Or you can also do it like this
```
./client_bonus [SUNUCU_PID] "Merhaba, minitalk!"
```

## Contributing

1. Fork this repository (click `Fork` button on the top right)
2. Create a new feature branch (`git checkout -b new-feature`)
3. Commit your changes (`git commit -am 'New feature: Description'`)
4. Push your branch (`git push origin new-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
