oldCommand = ''
command = ''
while True:
    oldCommand = command
    command = input('>').lower();

    if command =='help':
        print("start - to start the car")
        print("stop - to stop the car")
        print("quit - to exit")
    
    elif command == 'start':
        if oldCommand == command: 
            print('Car already Started');
        else: 
            print("Car Started")
    elif command == 'stop':
        if oldCommand == command: 
            print('Car already stopped');
        else: 
            print("Car stopped")
    elif command == 'quit':
        print("Quitting...")
        break;
    else:
        print("Invalid Command")
