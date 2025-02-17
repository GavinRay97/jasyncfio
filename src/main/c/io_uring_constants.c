#include "io_uring.h"
#include "io_uring_constants.h"

#define IO_URING_CONSTANTS_CLASS_NAME "one/jasyncfio/UringConstants"

static jbyte get_ioring_op_read(void) {
    return IORING_OP_READ;
}
static jbyte get_ioring_op_nop(void) {
    return IORING_OP_NOP;
}
static jbyte get_ioring_op_write(void) {
    return IORING_OP_WRITE;
}
static jbyte get_ioring_op_close(void) {
    return IORING_OP_CLOSE;
}
static jbyte get_ioring_op_openat(void) {
    return IORING_OP_OPENAT;
}
static jbyte get_ioring_op_readv(void) {
    return IORING_OP_READV;
}
static jbyte get_ioring_op_writev(void) {
    return IORING_OP_WRITEV;
}
static jbyte get_ioring_op_fsync(void) {
    return IORING_OP_FSYNC;
}
static jbyte get_ioring_op_read_fixed(void) {
    return IORING_OP_READ_FIXED;
}
static jbyte get_ioring_op_write_fixed(void) {
    return IORING_OP_WRITE_FIXED;
}
static jbyte get_ioring_op_poll_add(void) {
    return IORING_OP_POLL_ADD;
}
static jbyte get_ioring_op_poll_remove(void) {
    return IORING_OP_POLL_REMOVE;
}
static jbyte get_ioring_op_statx(void) {
    return IORING_OP_STATX;
}
static jbyte get_ioring_op_fallocate(void) {
    return IORING_OP_FALLOCATE;
}
static jbyte get_ioring_op_unlinkat(void) {
    return IORING_OP_UNLINKAT;
}
static jbyte get_ioring_op_renameat(void) {
    return IORING_OP_RENAMEAT;
}
static jbyte get_ioring_op_conntect(void) {
    return IORING_OP_CONNECT;
}
static jbyte get_ioring_op_accept(void) {
    return IORING_OP_ACCEPT;
}
static jbyte get_ioring_op_timeout(void) {
    return IORING_OP_TIMEOUT;
}
static jbyte get_ioring_op_timeout_remove(void) {
    return IORING_OP_TIMEOUT_REMOVE;
}
static jbyte get_ioring_op_sendmsg(void) {
    return IORING_OP_SENDMSG;
}
static jbyte get_ioring_op_recvmsg(void) {
    return IORING_OP_RECVMSG;
}
static jbyte get_ioring_op_send(void) {
    return IORING_OP_SEND;
}
static jbyte get_ioring_op_recv(void) {
    return IORING_OP_RECV;
}
static jbyte get_ioring_op_shutdown(void) {
    return IORING_OP_SHUTDOWN;
}
static jbyte get_ioring_op_splice(void) {
    return IORING_OP_SPLICE;
}
static jbyte get_ioring_op_send_zc(void) {
    return IORING_OP_SEND_ZC;
}

static jint get_ioring_enter_getevents(void) {
    return IORING_ENTER_GETEVENTS;
}
static jint get_ioring_setup_sqpoll(void) {
    return IORING_SETUP_SQPOLL;
}
static jint get_ioring_setup_iopoll(void) {
    return IORING_SETUP_IOPOLL;
}
static jint get_ioring_setup_sq_aff(void) {
    return IORING_SETUP_SQ_AFF;
}
static jint get_ioring_setup_cqsize(void) {
    return IORING_SETUP_CQSIZE;
}
static jint get_ioring_enter_sq_wakeup(void) {
    return IORING_ENTER_SQ_WAKEUP;
}
static jint get_ioring_sq_need_wakeup(void) {
    return IORING_SQ_NEED_WAKEUP;
}
static jint get_ioring_sq_cq_overflow(void) {
    return IORING_SQ_CQ_OVERFLOW;
}
static jint get_ioring_fsync_datasync(void) {
    return IORING_FSYNC_DATASYNC;
}
static jint get_ioring_setup_clamp(void) {
    return IORING_SETUP_CLAMP;
}
static jint get_ioring_setup_attach_wq(void) {
    return IORING_SETUP_ATTACH_WQ;
}
static jint get_ioring_register_buffers(void) {
    return IORING_REGISTER_BUFFERS;
}
static jint get_ioring_unregister_buffers(void) {
    return IORING_UNREGISTER_BUFFERS;
}
static jint get_ioring_register_files(void) {
    return IORING_REGISTER_FILES;
}
static jint get_ioring_unregister_files(void) {
    return IORING_UNREGISTER_FILES;
}
static jint get_ioring_register_probe(void) {
    return IORING_REGISTER_PROBE;
}
static jint get_ioring_register_pbuf_ring(void) {
    return IORING_REGISTER_PBUF_RING;
}
static jint get_ioring_unregister_pbuf_ring(void) {
    return IORING_UNREGISTER_PBUF_RING;
}
static jint get_iosqe_buffer_select(void) {
    return IOSQE_BUFFER_SELECT;
}
static jint get_ioring_cqe_f_buffer(void) {
    return IORING_CQE_F_BUFFER;
}


static JNINativeMethod method_table[] = {
    {"ioRingEnterGetEvents", "()I", (void *) get_ioring_enter_getevents},
    {"ioRingSetupSqPoll", "()I", (void *) get_ioring_setup_sqpoll},
    {"ioRingSetupIoPoll", "()I", (void *) get_ioring_setup_iopoll},
    {"ioRingSetupSqAff", "()I", (void *) get_ioring_setup_sq_aff},
    {"ioRingSetupCqSize", "()I", (void *) get_ioring_setup_cqsize},
    {"ioRingEnterSqWakeup", "()I", (void *) get_ioring_enter_sq_wakeup},
    {"ioRingSqNeedWakeup", "()I", (void *) get_ioring_sq_need_wakeup},
    {"ioRingSqCqOverflow", "()I", (void *) get_ioring_sq_cq_overflow},
    {"ioRingFsyncDatasync", "()I", (void *) get_ioring_fsync_datasync},
    {"ioRingSetupClamp", "()I", (void *) get_ioring_setup_clamp},
    {"ioRingSetupAttachWq", "()I", (void *) get_ioring_setup_attach_wq},
    {"ioRingOpRead", "()B", (void *) get_ioring_op_read},
    {"ioRingOpWrite", "()B", (void *) get_ioring_op_write},
    {"ioRingOpenAt", "()B", (void *) get_ioring_op_openat},
    {"ioRingOpClose", "()B", (void *) get_ioring_op_close},
    {"ioRingOpNop", "()B", (void *) get_ioring_op_nop},
    {"ioRingOpStatx", "()B", (void *) get_ioring_op_statx},
    {"ioRingOpReadv", "()B", (void *) get_ioring_op_readv},
    {"ioRingOpWritev", "()B", (void *) get_ioring_op_writev},
    {"ioRingOpFsync", "()B", (void *) get_ioring_op_fsync},
    {"ioRingOpReadFixed", "()B", (void *) get_ioring_op_read_fixed},
    {"ioRingOpWriteFixed", "()B", (void *) get_ioring_op_write_fixed},
    {"ioRingOpPollAdd", "()B", (void *) get_ioring_op_poll_add},
    {"ioRingOpPollRemove", "()B", (void *) get_ioring_op_poll_remove},
    {"ioRingOpFallocate", "()B", (void *) get_ioring_op_fallocate},
    {"ioRingOpUnlinkAt", "()B", (void *) get_ioring_op_unlinkat},
    {"ioRingOpRenameAt", "()B", (void *) get_ioring_op_renameat},
    {"ioRingOpConnect", "()B", (void *) get_ioring_op_conntect},
    {"ioRingOpAccept", "()B", (void *) get_ioring_op_accept},
    {"ioRingOpTimeout", "()B", (void *) get_ioring_op_timeout},
    {"ioRingOpTimeoutRemove", "()B", (void *) get_ioring_op_timeout_remove},
    {"ioRingOpSendMsg", "()B", (void *) get_ioring_op_sendmsg},
    {"ioRingOpRecvMsg", "()B", (void *) get_ioring_op_recvmsg},
    {"ioRingOpSend", "()B", (void *) get_ioring_op_send},
    {"ioRingOpRecv", "()B", (void *) get_ioring_op_recv},
    {"ioRingOpSplice", "()B", (void *) get_ioring_op_splice},
    {"ioRingOpShutdown", "()B", (void *) get_ioring_op_shutdown},
    {"ioRingOpSendZc", "()B", (void *) get_ioring_op_send_zc},
    {"ioRingRegisterBuffers", "()I", (void *) get_ioring_register_buffers},
    {"ioRingUnregisterBuffers", "()I", (void *) get_ioring_unregister_buffers},
    {"ioRingRegisterFiles", "()I", (void *) get_ioring_register_files},
    {"ioRingUnregisterFiles", "()I", (void *) get_ioring_unregister_files},
    {"ioRingRegisterProbe", "()I", (void *) get_ioring_register_probe},
    {"ioRingRegisterPbufRing", "()I", (void *) get_ioring_register_pbuf_ring},
    {"ioRingUnregisterPbufRing", "()I", (void *) get_ioring_unregister_pbuf_ring},
    {"iosqeBufferSelect", "()I", (void *) get_iosqe_buffer_select},
    {"ioRingCqeFBuffer", "()I", (void *) get_ioring_cqe_f_buffer},
};

jint jni_io_uring_constants_on_load(JNIEnv *env) {
    jclass native_class = (*env)->FindClass(env, IO_URING_CONSTANTS_CLASS_NAME);
    if ((*env)->ExceptionCheck(env)) {
        (*env)->ExceptionDescribe(env);
        return JNI_ERR;
    }
    return (*env)->RegisterNatives(env, native_class, method_table, sizeof(method_table)/sizeof(method_table[0]));
}
