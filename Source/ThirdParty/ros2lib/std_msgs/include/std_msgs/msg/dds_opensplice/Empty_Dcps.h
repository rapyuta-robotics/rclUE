#ifndef _H_9FA34D7DF75C8F9043BB0F3B23225BB6_Empty_DCPS_H_
#define _H_9FA34D7DF75C8F9043BB0F3B23225BB6_Empty_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Empty_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Empty_TypeSupportInterface;

            typedef Empty_TypeSupportInterface * Empty_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Empty_TypeSupportInterface> Empty_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Empty_TypeSupportInterface> Empty_TypeSupportInterface_out;


            class Empty_DataWriter;

            typedef Empty_DataWriter * Empty_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Empty_DataWriter> Empty_DataWriter_var;
            typedef DDS_DCPSInterface_out < Empty_DataWriter> Empty_DataWriter_out;


            class Empty_DataReader;

            typedef Empty_DataReader * Empty_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Empty_DataReader> Empty_DataReader_var;
            typedef DDS_DCPSInterface_out < Empty_DataReader> Empty_DataReader_out;


            class Empty_DataReaderView;

            typedef Empty_DataReaderView * Empty_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Empty_DataReaderView> Empty_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Empty_DataReaderView> Empty_DataReaderView_out;

            struct Empty_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Empty_, struct Empty_Seq_uniq_> Empty_Seq;
            typedef DDS_DCPSSequence_var < Empty_Seq> Empty_Seq_var;
            typedef DDS_DCPSSequence_out < Empty_Seq> Empty_Seq_out;

            class  Empty_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Empty_TypeSupportInterface_ptr _ptr_type;
                typedef Empty_TypeSupportInterface_var _var_type;

                static Empty_TypeSupportInterface_ptr _duplicate (Empty_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Empty_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Empty_TypeSupportInterface () {};
                ~Empty_TypeSupportInterface () {};
            private:
                Empty_TypeSupportInterface (const Empty_TypeSupportInterface &);
                Empty_TypeSupportInterface & operator = (const Empty_TypeSupportInterface &);
            };

            class  Empty_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Empty_DataWriter_ptr _ptr_type;
                typedef Empty_DataWriter_var _var_type;

                static Empty_DataWriter_ptr _duplicate (Empty_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Empty_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Empty_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Empty_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Empty_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Empty_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Empty_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Empty_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Empty_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Empty_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Empty_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Empty_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Empty_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Empty_& instance_data) = 0;

            protected:
                Empty_DataWriter () {};
                ~Empty_DataWriter () {};
            private:
                Empty_DataWriter (const Empty_DataWriter &);
                Empty_DataWriter & operator = (const Empty_DataWriter &);
            };

            class  Empty_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Empty_DataReader_ptr _ptr_type;
                typedef Empty_DataReader_var _var_type;

                static Empty_DataReader_ptr _duplicate (Empty_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Empty_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Empty_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Empty_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Empty_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Empty_& instance) = 0;

            protected:
                Empty_DataReader () {};
                ~Empty_DataReader () {};
            private:
                Empty_DataReader (const Empty_DataReader &);
                Empty_DataReader & operator = (const Empty_DataReader &);
            };

            class  Empty_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Empty_DataReaderView_ptr _ptr_type;
                typedef Empty_DataReaderView_var _var_type;

                static Empty_DataReaderView_ptr _duplicate (Empty_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Empty_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Empty_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Empty_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Empty_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Empty_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Empty_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Empty_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Empty_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Empty_& instance) = 0;

            protected:
                Empty_DataReaderView () {};
                ~Empty_DataReaderView () {};
            private:
                Empty_DataReaderView (const Empty_DataReaderView &);
                Empty_DataReaderView & operator = (const Empty_DataReaderView &);
            };
        }

    }

}

#endif
