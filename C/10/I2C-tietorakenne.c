#include <stdio.h>
#include <inttypes.h>

struct i2c_message {
    uint8_t sensorRegister; // Sensorin sisäinen muistipaikka
    uint8_t slaveAddress;   // Sensorin osoite
    char *writeBuf;         // Kirjoituspuskuri sensorille 
    uint8_t writeCount;     // Kirjoituspuskurin pituus
    char *readBuf;          // Vastaanottopuskuri
    uint8_t readCount;      // Vastaanottopuskurin pituus
}i2c;

char txBuf[] = "ab",rxBuf[] = "cd";

void print_i2c(struct i2c_message *msg);

int main() {
//struct i2c_message i2c;
i2c.sensorRegister = 0x01;
i2c.slaveAddress = 0x78;
i2c.writeBuf = txBuf;
i2c.writeCount = 2;
i2c.readBuf = rxBuf;
i2c.readCount = 2;
return 0;
}

void print_i2c(struct i2c_message *msg) {
    int i;

    printf("sensorRegister:%02x\n", msg->sensorRegister);
    printf("slaveAddress:%02x\n", msg->slaveAddress);

    printf("writeBuf:");
    for (i = 0; i < msg->writeCount; i++) {
        printf("%x", msg->writeBuf[i]);
    }
    printf("\n");
    printf("readBuf:");
    for (i = 0; i < msg->readCount; i++) {
        printf("%x", msg->readBuf[i]);
    }
    printf("\n");
}