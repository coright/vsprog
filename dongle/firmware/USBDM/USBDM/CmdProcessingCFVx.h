#ifndef _CMDPROCESSINGCFVX_H_
#define _CMDPROCESSINGCFVX_H_

#if (CAPABILITY&CAP_CFVx)
U8 f_CMD_CFVx_RESET(void);
U8 f_CMD_CFVx_HALT(void);
U8 f_CMD_CFVx_GO(void);
U8 f_CMD_CFVx_STEP(void);
U8 f_CMD_CFVx_READ_CREG(void);
U8 f_CMD_CFVx_WRITE_CREG(void);
U8 f_CMD_CFVx_READ_DREG(void);
U8 f_CMD_CFVx_READ_STATUS_REG(void);
U8 f_CMD_CFVx_WRITE_DREG(void);
U8 f_CMD_CFVx_READ_REG(void);
U8 f_CMD_CFVx_WRITE_REG(void);
U8 f_CMD_CFVx_READ_MEM(void);
U8 f_CMD_CFVx_WRITE_MEM(void);
U8 f_CMD_CFVx_RESYNC(void);
U8 f_CMD_CFVx_CONTROL_INTERFACE(void);
U8 f_CMD_CFVx_SET_SPEED(void);
U8 f_CMD_JTAG_GOTORESET(void);
U8 f_CMD_JTAG_GOTOSHIFT(void);
U8 f_CMD_JTAG_WRITE(void);
U8 f_CMD_JTAG_READ(void);
U8 f_CMD_JTAG_READ_WRITE(void);
#endif // (CAPABILITY&CAP_CFVx)

#endif // _CMDPROCESSINGCFVX_H_
