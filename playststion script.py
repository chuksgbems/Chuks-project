import logging
from wakeonlan import send_magic_packet

# Configure logging to record script events for documentation
logging.basicConfig(
    filename='ps_automation.log',  # Log file name
    level=logging.INFO,  # Log level
    format='%(asctime)s - %(levelname)s - %(message)s',  # Log format
    datefmt='%Y-%m-%d %H:%M:%S'  # Date format
)

# PlayStation's MAC address (replace with your PlayStation's MAC address)
# Format example: 'AA:BB:CC:DD:EE:FF'
PS_MAC_ADDRESS = 'XX:XX:XX:XX:XX:XX'

def turn_on_playstation():
    """
    Sends a magic packet to the PlayStation's MAC address to wake it up using Wake-on-LAN (WoL).
    """
    logging.info("Attempting to send a magic packet to turn on the PlayStation.")

    try:
        # Sending the magic packet to the PlayStation
        send_magic_packet(PS_MAC_ADDRESS)
        logging.info(f"Magic packet successfully sent to MAC address: {PS_MAC_ADDRESS}")
        print("Magic packet sent! PlayStation should be turning on.")

    except Exception as e:
        # Catch and log any exceptions that occur
        logging.error(f"An error occurred while trying to send the magic packet: {e}")
        print(f"An error occurred: {e}")

def validate_mac_address(mac_address):
    """
    Validates the MAC address format to ensure it follows the correct pattern (6 pairs of hex digits).
    
    :param mac_address: str, The MAC address to validate.
    :return: bool, True if the MAC address is valid, False otherwise.
    """
    if len(mac_address) == 17 and all(c in "0123456789ABCDEF:" for c in mac_address.upper()):
        logging.info(f"MAC address {mac_address} is valid.")
        return True
    else:
        logging.warning(f"Invalid MAC address format: {mac_address}")
        print("The MAC address format is invalid. Please check the address and try again.")
        return False

if __name__ == "__main__":
    logging.info("PlayStation automation script started.")
    
    # Validate the provided MAC address before attempting to send the magic packet
    if validate_mac_address(PS_MAC_ADDRESS):
        turn_on_playstation()
    else:
        logging.error(f"Script terminated due to invalid MAC address: {PS_MAC_ADDRESS}")
    
    logging.info("PlayStation automation script finished.")
