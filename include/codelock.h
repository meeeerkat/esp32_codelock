#ifndef _CODELOCK_H_
#define _CODELOCK_H_

extern void init_codelock(char *code);

// Setters
extern void codelock_set_code(char *code);
extern void codelock_set_on_success_callback(void (*callback) (void));
extern void codelock_set_on_failure_callback(void (*callback) (void));

#endif
