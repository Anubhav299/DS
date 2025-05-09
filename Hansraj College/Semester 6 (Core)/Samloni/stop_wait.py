# import random

# def sender(num,flag):
# 	print("Packet",num,"Sent Successfully!")
# 	print("Timer Started!")
# 	print("---------------------")
# 	if flag:
# 		check=reciever(num)
# 		if check:
# 			print("Acknowledgement Recieved!")
# 			if num<10:
# 				print("Sending next Packet!")
# 	return True

# def reciever(num):
# 	print("Packet",num,"Recieved!")
# 	print("Acknowledgement Sent!")
# 	print("---------------------")
# 	return True

# def error(num):
# 	flag=False
# 	sender(num,flag)
# 	print("Packet arrived corrupted!,Packet Discarded!!")
# 	print("---------------------")
# 	print("Time Out!")
# 	print("Retransmitting Packet",num)
# 	sender(num,True)

# prob=random.randint(0,10)
# for i in range(10):
# 	if i==prob:
# 		error(i+1)
# 	else:
# 		sender(i+1,True)

import time

def send_packet(packet_num):
    print(f"Sender: Sending packet {packet_num}")
    time.sleep(1)
    return packet_num

def send_ack(ack_num):
    print(f"Receiver: Packet {ack_num} received!")
    print(f"Receiver: Sending acknowledgement for packet {ack_num}")
    time.sleep(1)

def simulate_stop_and_wait(num_packets):
    packet_num = 1
    successful_transmissions = 0
    while packet_num <= num_packets:
        packet = send_packet(packet_num)
        send_ack(packet_num)
        successful_transmissions += 1
        packet_num += 1
    print(f"Total successful transmissions: {successful_transmissions}/{num_packets}")

# Simulate 10 packets
simulate_stop_and_wait(10)
