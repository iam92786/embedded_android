# Booting_process_of_Android_OS

## What is the difference between the Linux and Android kernels?
  Here’s a list of changes/addons that the Android Project made to the Linux kernels:-
  
  1. Binder: It is an Android-specific interprocess communication mechanism and remote method invocation system.
  2. ashmem: “Android Shared Memory”. It is a new shared memory allocator, similar to POSIX SHM but with different behavior and sporting a simpler file-based API.
  3. pmem: “Process memory allocator”: It is used to manage large (1–16+ MB) physically contiguous regions of memory shared between userspace and kernel drivers.
  4. logger: This is the kernel support for the logcat command.
  5. wakelocks: It is used for power management files. It holds the machine awake on a per-event basis until the wake lock is released.
  6. oom handling: It kills processes as available memory becomes low.
  7. alarm manager: It lets userspace tell the kernel when it would like to wake up.
  8. RAM_CONSOLE: Allows to save kernel printk messages to a buffer in RAM, so that after a kernel panic they can be viewed in the next kernel invocation.
  10. USB gadget driver for ADB
  11. yaffs2: flash filesystem
