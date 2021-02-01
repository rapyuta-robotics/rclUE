#ifndef _H_6E2D6B72145F4072A78909D32DCD18D5_Float64MultiArray_DCPS_H_
#define _H_6E2D6B72145F4072A78909D32DCD18D5_Float64MultiArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Float64MultiArray_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Float64MultiArray_TypeSupportInterface;

            typedef Float64MultiArray_TypeSupportInterface * Float64MultiArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Float64MultiArray_TypeSupportInterface> Float64MultiArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Float64MultiArray_TypeSupportInterface> Float64MultiArray_TypeSupportInterface_out;


            class Float64MultiArray_DataWriter;

            typedef Float64MultiArray_DataWriter * Float64MultiArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Float64MultiArray_DataWriter> Float64MultiArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < Float64MultiArray_DataWriter> Float64MultiArray_DataWriter_out;


            class Float64MultiArray_DataReader;

            typedef Float64MultiArray_DataReader * Float64MultiArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Float64MultiArray_DataReader> Float64MultiArray_DataReader_var;
            typedef DDS_DCPSInterface_out < Float64MultiArray_DataReader> Float64MultiArray_DataReader_out;


            class Float64MultiArray_DataReaderView;

            typedef Float64MultiArray_DataReaderView * Float64MultiArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Float64MultiArray_DataReaderView> Float64MultiArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Float64MultiArray_DataReaderView> Float64MultiArray_DataReaderView_out;

            struct Float64MultiArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Float64MultiArray_, struct Float64MultiArray_Seq_uniq_> Float64MultiArray_Seq;
            typedef DDS_DCPSSequence_var < Float64MultiArray_Seq> Float64MultiArray_Seq_var;
            typedef DDS_DCPSSequence_out < Float64MultiArray_Seq> Float64MultiArray_Seq_out;

            class  Float64MultiArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Float64MultiArray_TypeSupportInterface_ptr _ptr_type;
                typedef Float64MultiArray_TypeSupportInterface_var _var_type;

                static Float64MultiArray_TypeSupportInterface_ptr _duplicate (Float64MultiArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float64MultiArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Float64MultiArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float64MultiArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Float64MultiArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Float64MultiArray_TypeSupportInterface () {};
                ~Float64MultiArray_TypeSupportInterface () {};
            private:
                Float64MultiArray_TypeSupportInterface (const Float64MultiArray_TypeSupportInterface &);
                Float64MultiArray_TypeSupportInterface & operator = (const Float64MultiArray_TypeSupportInterface &);
            };

            class  Float64MultiArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Float64MultiArray_DataWriter_ptr _ptr_type;
                typedef Float64MultiArray_DataWriter_var _var_type;

                static Float64MultiArray_DataWriter_ptr _duplicate (Float64MultiArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float64MultiArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Float64MultiArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float64MultiArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Float64MultiArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Float64MultiArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Float64MultiArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Float64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Float64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Float64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Float64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Float64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Float64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Float64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Float64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Float64MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float64MultiArray_& instance_data) = 0;

            protected:
                Float64MultiArray_DataWriter () {};
                ~Float64MultiArray_DataWriter () {};
            private:
                Float64MultiArray_DataWriter (const Float64MultiArray_DataWriter &);
                Float64MultiArray_DataWriter & operator = (const Float64MultiArray_DataWriter &);
            };

            class  Float64MultiArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Float64MultiArray_DataReader_ptr _ptr_type;
                typedef Float64MultiArray_DataReader_var _var_type;

                static Float64MultiArray_DataReader_ptr _duplicate (Float64MultiArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float64MultiArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Float64MultiArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float64MultiArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Float64MultiArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Float64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Float64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Float64MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float64MultiArray_& instance) = 0;

            protected:
                Float64MultiArray_DataReader () {};
                ~Float64MultiArray_DataReader () {};
            private:
                Float64MultiArray_DataReader (const Float64MultiArray_DataReader &);
                Float64MultiArray_DataReader & operator = (const Float64MultiArray_DataReader &);
            };

            class  Float64MultiArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Float64MultiArray_DataReaderView_ptr _ptr_type;
                typedef Float64MultiArray_DataReaderView_var _var_type;

                static Float64MultiArray_DataReaderView_ptr _duplicate (Float64MultiArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float64MultiArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Float64MultiArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float64MultiArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Float64MultiArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Float64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Float64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Float64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Float64MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float64MultiArray_& instance) = 0;

            protected:
                Float64MultiArray_DataReaderView () {};
                ~Float64MultiArray_DataReaderView () {};
            private:
                Float64MultiArray_DataReaderView (const Float64MultiArray_DataReaderView &);
                Float64MultiArray_DataReaderView & operator = (const Float64MultiArray_DataReaderView &);
            };
        }

    }

}

#endif
