extern bool init_trx(void);
extern bool trx_switch_rx(uint8_t address[5], uint8_t sizeof_address);
extern void trx_receive(uint8_t *buffer, uint8_t sizeof_buffer);
extern bool trx_switch_tx(uint8_t address[5], uint8_t sizeof_address);
extern void trx_transmit(uint8_t *payload, uint8_t sizeof_payload);
extern bool trx_data_available(void);
extern uint8_t *trx_dump_memory(uint8_t registers[], uint8_t num_of_registers, uint8_t data[]);