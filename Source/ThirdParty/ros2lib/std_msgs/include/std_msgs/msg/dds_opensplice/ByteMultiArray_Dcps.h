#ifndef _H_9EB833C00F05270AC7F91F800E944354_ByteMultiArray_DCPS_H_
#define _H_9EB833C00F05270AC7F91F800E944354_ByteMultiArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ByteMultiArray_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class ByteMultiArray_TypeSupportInterface;

            typedef ByteMultiArray_TypeSupportInterface * ByteMultiArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ByteMultiArray_TypeSupportInterface> ByteMultiArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ByteMultiArray_TypeSupportInterface> ByteMultiArray_TypeSupportInterface_out;


            class ByteMultiArray_DataWriter;

            typedef ByteMultiArray_DataWriter * ByteMultiArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ByteMultiArray_DataWriter> ByteMultiArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < ByteMultiArray_DataWriter> ByteMultiArray_DataWriter_out;


            class ByteMultiArray_DataReader;

            typedef ByteMultiArray_DataReader * ByteMultiArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ByteMultiArray_DataReader> ByteMultiArray_DataReader_var;
            typedef DDS_DCPSInterface_out < ByteMultiArray_DataReader> ByteMultiArray_DataReader_out;


            class ByteMultiArray_DataReaderView;

            typedef ByteMultiArray_DataReaderView * ByteMultiArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ByteMultiArray_DataReaderView> ByteMultiArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ByteMultiArray_DataReaderView> ByteMultiArray_DataReaderView_out;

            struct ByteMultiArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ByteMultiArray_, struct ByteMultiArray_Seq_uniq_> ByteMultiArray_Seq;
            typedef DDS_DCPSSequence_var < ByteMultiArray_Seq> ByteMultiArray_Seq_var;
            typedef DDS_DCPSSequence_out < ByteMultiArray_Seq> ByteMultiArray_Seq_out;

            class  ByteMultiArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ByteMultiArray_TypeSupportInterface_ptr _ptr_type;
                typedef ByteMultiArray_TypeSupportInterface_var _var_type;

                static ByteMultiArray_TypeSupportInterface_ptr _duplicate (ByteMultiArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ByteMultiArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ByteMultiArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ByteMultiArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ByteMultiArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ByteMultiArray_TypeSupportInterface () {};
                ~ByteMultiArray_TypeSupportInterface () {};
            private:
                ByteMultiArray_TypeSupportInterface (const ByteMultiArray_TypeSupportInterface &);
                ByteMultiArray_TypeSupportInterface & operator = (const ByteMultiArray_TypeSupportInterface &);
            };

            class  ByteMultiArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ByteMultiArray_DataWriter_ptr _ptr_type;
                typedef ByteMultiArray_DataWriter_var _var_type;

                static ByteMultiArray_DataWriter_ptr _duplicate (ByteMultiArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ByteMultiArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ByteMultiArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ByteMultiArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ByteMultiArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ByteMultiArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ByteMultiArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ByteMultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ByteMultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ByteMultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ByteMultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ByteMultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ByteMultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ByteMultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ByteMultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ByteMultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ByteMultiArray_& instance_data) = 0;

            protected:
                ByteMultiArray_DataWriter () {};
                ~ByteMultiArray_DataWriter () {};
            private:
                ByteMultiArray_DataWriter (const ByteMultiArray_DataWriter &);
                ByteMultiArray_DataWriter & operator = (const ByteMultiArray_DataWriter &);
            };

            class  ByteMultiArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ByteMultiArray_DataReader_ptr _ptr_type;
                typedef ByteMultiArray_DataReader_var _var_type;

                static ByteMultiArray_DataReader_ptr _duplicate (ByteMultiArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ByteMultiArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ByteMultiArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ByteMultiArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ByteMultiArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ByteMultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ByteMultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ByteMultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ByteMultiArray_& instance) = 0;

            protected:
                ByteMultiArray_DataReader () {};
                ~ByteMultiArray_DataReader () {};
            private:
                ByteMultiArray_DataReader (const ByteMultiArray_DataReader &);
                ByteMultiArray_DataReader & operator = (const ByteMultiArray_DataReader &);
            };

            class  ByteMultiArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ByteMultiArray_DataReaderView_ptr _ptr_type;
                typedef ByteMultiArray_DataReaderView_var _var_type;

                static ByteMultiArray_DataReaderView_ptr _duplicate (ByteMultiArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ByteMultiArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ByteMultiArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ByteMultiArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ByteMultiArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ByteMultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ByteMultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ByteMultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ByteMultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ByteMultiArray_& instance) = 0;

            protected:
                ByteMultiArray_DataReaderView () {};
                ~ByteMultiArray_DataReaderView () {};
            private:
                ByteMultiArray_DataReaderView (const ByteMultiArray_DataReaderView &);
                ByteMultiArray_DataReaderView & operator = (const ByteMultiArray_DataReaderView &);
            };
        }

    }

}

#endif
